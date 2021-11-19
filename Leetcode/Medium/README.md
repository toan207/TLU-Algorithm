# Medium Problems - Code mẫu và giải thích

### [2. Add Two Numbers](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/2_AddTwoNumbers.cpp)
**Tóm tắt đề:**
Cho 2 *linked list* chứa các chữ số của 1 số theo thứ tự ngược lại
(VD: `2->4->3` biểu diễn số 342). Hãy tìm *linked list* biểu diễn tổng của 
2 số trên

**VD minh họa:**
List_a: `2->4->3`
List_b: `5->6->4`
a = 342 và b = 465
a+b = 807
Vậy *list* cần tìm là `7->0->8`

**Hướng dẫn giải:**
- Từ List_a, tách từng chữ số rồi ghép lại được số *a*, tương tự với 
List_b để có được số *b*
- Tính *c = a + b* (sử dụng string để cộng số lớn)
- Tạo *ListNode* `ans` với `val` = c[0] và `next` trỏ đến *NULL* 
(*ListNode* cuối cùng của *list* cần tìm)
- Duyệt lần lượt từ c[1] đến cuối xâu `c`
  - Tạo *ListNode* `tmp` để lưu `ans`
  - `ans` sẽ bằng 1 *ListNode* mới với `val` = c[i] và `next` trỏ đến 
`tmp`
- Kết thúc duyệt, `ans` chính là head của *list* cần tìm
### [222. Count Complete Tree Node](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/222_CountCompleteTreeNodes.cpp)
**Tóm tắt đề:**
Cho một con trỏ kiểu TreeNode là root của một
cây nhị phân, hãy đếm xem cây nhị phân này có bao nhiêu node.

**Hướng dẫn giải:**
- Xác định được rằng:
  - Số node tính từ 1 `node X` bằng 1 (*bản thân* `node X`) và số
node tính từ nhánh `left` và `right` của X.
  - Nếu 1 node là `NULL` thì số node tính từ nó bằng 0
- Sử dụng công thức trên, gọi đệ quy bắt đầu từ node `root`
- Kết thúc đệ quy, hàm sẽ trả về số node tính từ `root` (*tổng số
node của cây nhị phân*).
