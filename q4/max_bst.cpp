#include <iostream>
#include <cmath>
#include <algorithm>

namespace CP {

// จำลอง Class map_bst สำหรับการทดสอบ (ใน Grader จะมีให้แล้ว)
template <typename KeyT, typename MappedT>
class map_bst {
protected:
    struct node {
        KeyT data;
        MappedT mapped;
        node *left;
        node *right;
        node(const KeyT& k, const MappedT& m) : data(k), mapped(m), left(NULL), right(NULL) {}
    };
    node *mRoot;

public:
    map_bst() : mRoot(NULL) {}
    
    // ฟังก์ชันสำหรับใส่ข้อมูลเพื่อ Test
    void insert(KeyT k, MappedT m) {
        // (โค้ด insert แบบย่อเพื่อใช้สร้าง test case)
        node** ptr = &mRoot;
        while (*ptr != NULL) {
            if (k < (*ptr)->data) ptr = &((*ptr)->left);
            else ptr = &((*ptr)->right);
        }
        *ptr = new node(k, m);
    }

    // ---------------------------------------------------------
    // ส่วนที่ต้องส่ง (Solution) เริ่มตรงนี้
    // ---------------------------------------------------------

    // Helper function: คืนค่าจำนวน node ใน subtree และอัปเดต max diff
    int count_and_update(node* n, int &max_diff) {
        if (n == NULL) {
            return 0;
        }

        // หาขนาดของ subtree ฝั่งซ้าย
        int left_size = count_and_update(n->left, max_diff);
        
        // หาขนาดของ subtree ฝั่งขวา
        int right_size = count_and_update(n->right, max_diff);

        // คำนวณผลต่าง
        int diff = std::abs(left_size - right_size);

        // อัปเดตค่ามากสุดถ้าเจอผลต่างที่มากกว่าเดิม
        if (diff > max_diff) {
            max_diff = diff;
        }

        // คืนค่าขนาดรวมของ node นี้ (1 + ซ้าย + ขวา) กลับไปให้ parent
        return 1 + left_size + right_size;
    }

public:
    int max_split() {
        int max_diff = 0;
        // เรียก recursive function เริ่มจาก root
        count_and_update(mRoot, max_diff);
        return max_diff;
    }

    // ---------------------------------------------------------
    // จบส่วนที่ต้องส่ง
    // ---------------------------------------------------------
};

} // namespace CP

// ฟังก์ชัน Main สำหรับทดสอบโค้ด
int main() {
    CP::map_bst<int, int> m;
    
    // ตัวอย่าง Test Case
    // สร้าง Tree:
    //       10
    //      /  \
    //     5    20
    //    /    /  \
    //   3    15   30
    //              \
    //               40
    
    m.insert(10, 10);
    m.insert(5, 5);
    m.insert(3, 3);
    m.insert(20, 20);
    m.insert(15, 15);
    m.insert(30, 30);
    m.insert(40, 40);

    // วิเคราะห์:
    // Node 3: L=0, R=0 -> Split = 0
    // Node 5: L=1(3), R=0 -> Split = 1
    // Node 40: L=0, R=0 -> Split = 0
    // Node 30: L=0, R=1(40) -> Split = 1
    // Node 15: L=0, R=0 -> Split = 0
    // Node 20: L=1(15), R=2(30,40) -> Split = 1
    // Node 10 (Root): L=2(5,3), R=4(20,15,30,40) -> Split = abs(2-4) = 2
    
    // ดังนั้นคำตอบควรเป็น 2
    std::cout << "Max Split: " << m.max_split() << std::endl;

    return 0;
}