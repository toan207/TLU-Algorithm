# Medium Problems - Code mẫu và giải thích


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
