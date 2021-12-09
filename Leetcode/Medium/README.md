# Medium Problems - Code mẫu và giải thích

## [2. Add Two Numbers](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Medium/Code/2_AddTwoNumbers.cpp)
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

## [7. Reverse Integer](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Medium/Code/7_ReverseInteger.cpp)
### **Tóm tắt đề:**
#### **Tìm số đảo ngược của số nguyên kiểu integer**
- Cho một số nguyên kiểu `int`: `x`, tìm số đảo ngược của `x`
- Nếu quá giới hạn kiểu `int`, trả về `0`

### **Ví dụ:**

- `1412` đảo ngược là `2141`
- `-69` đảo ngược là `-96`
- `0012` đảo ngược là `21`
- `8281972920121` quá `INT_MAX`, trả về `0`
  
### **Hướng dẫn giải:**
- Tạo 1 biến lưu giá trị số đảo ngược `n`, khởi tạo giá trị = `0`
- Sử dụng vòng lặp, `n` sẽ tăng gấp 10 lần và cộng với phần dư
- Do số cần đảo ngược ở dạng `int` nên khi chia đến phần nguyên là `0`, dừng vòng lặp.
- Sau vòng lặp ta sẽ cos `n` là số đảo ngược của số ban đầu 
- Nếu quá giới hạn kiểu `int`, trả về `0`

## [12.Integer to Roman](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Medium/Code/12_IntegertoRoman.cpp)
**Tóm tắt đề:**
- Nhập một số nguyên bất kỳ rồi chuyển thành số La Mã
- Chữ số La Mã được thể hiện bằng bảy ký hiệu khác nhau: I, V, X, L, C, D và M.

**Ví dụ:**
- 2 được viết là II bằng số La Mã, chỉ là hai chữ cái được thêm vào với nhau. 12 được viết là XII, đơn giản là X + II. Con số 27 được viết là XXVII, là XX + V + II.
- Chữ số La mã thường được viết từ lớn nhất đến nhỏ nhất từ ​​trái sang phải. Tuy nhiên, chữ số cho bốn không phải là IIII. Thay vào đó, số bốn được viết là IV. Bởi vì cái đứng trước năm, chúng ta trừ nó ra làm bốn. 

**Hướng dẫn giải:**

1.Quy tắc viết số la mã: 
    (1) Phải cộng trái trừ (IV 4, IX 9, XL 40, XC 90) 
    (2) I X C M không được lặp lại quá 3lần
    (3) V L D không được lặp lại trong 1 dãy số
    (4) I trước chính nó hoặc X và V; X trước L và C; C trước D và M; M đầu dãy số
    (5) Là tổng các kí tự tương ứng
2.Làm 
    - while nếu điều kiện còn đúng thực hiện vòng lặp-
    (2) => 3000>n>1000, 300>n>100, 30>n>10 có thể biểu diễn bằng 3 kí tự liên tiếp giống nhau 
        => dùng while cho 3 trường hợp (n>1000,>100,>10)    
    - if chỉ thực hiện nếu điều kiện đúng-
    (3)(4) => số như 900, 500, 400, 90, 50, 40, 9,5,4 dùng if vì có cách viết không được lăp lại
    s kiểu string để lưu kí tự, s+= thêm vào bên phải xâu s 1 kí tự nếu thỏa mãn điều kiện
    (5) => n-= là phép trừ n cho mỗi giá trị nếu điều kiện đúng 
        
    vd: n=234 (n>100) nên n-=100; s+='C';
        => n=134 (n>100); s=C nên n-=100; s+='C'; 
        => n=34; s=CC tiếp tục xét điều kiện đến khi n=0.  

## [62. Unique Paths](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Medium/Code/62_UniquePaths.cpp)

### **Tóm tắt đề:**
*	Robot được đặt ở góc trên bên trái của lưới `m x n` (đánh dấu là ‘Start’)
*	Robot chỉ có thể di chuyển xuống hoặc sang phải.
*	Robot cần tiếp cận góc dưới cùng bên phải của lưới (đánh dấu là ‘Finish’)
*	Có bao nhiêu con đường có thể có?

### **Ví dụ:**
#### 1. VD1:
![markdown]( https://assets.leetcode.com/uploads/2018/10/22/robot_maze.png)
*	Input: m = 3, n = 7
*	Output: 28

#### 2. VD2:
*	Input: m = 3, n = 2
*	Output: 3
*	Giải thích: Có 3 cách như sau:
   - Phải -> Xuống -> Xuống
   - Xuống ->Xuống -> Phải
   - Xuống ->Phải -> Xuống
### **Hướng dẫn giải:**

#### 1. Để đi hết `m` ô theo chiều dọc ta cần đi `m – 1` bước; đi hết `n` ô theo chiều ngang cần `n - 1` bước.
#### 2.	Ta coi việc đi sang phải là `1`, đi xuống dưới là `0`.
#### 3.	Mặt khác, muốn tới đích ta bắt buộc phải đi sang phải `k`=`n - 1` bước, ta có biểu diễn: `a1`+`a2`+`a3`+…+`ah`=`k` .
*	Với `h`=`m - 1`+`n - 1`là tổng số bước phải đi
*	`ai` là lựa chọn `1` hoặc `0` (sang phải hoặc xuống dưới))
#### 4.	Như vậy, ta chỉ việc lựa chọn k số từ h số để `ai`=1, số cách chọn sẽ là hCk (tổ hợp chập k của h).
#### 5.VD: `m` = 3, `n` = 7
*	Có `k` = 6, `h` = 8
*	`a1`+`a2`+`a3`+…+`a8`=`6`
*	Chọn 6 số từ 8 số để `ai`=1 có 8C6 = 28 cách chọn.
* 	Một lưu ý nữa là ta thấy 8C6 = 8C2, mà việc tính 8C2 bớt tốn thời gian hơn, nên thay vì gán `k`=`n - 1` như ở bước 3, ta sẽ gán `k`= `min(n,m)-1`.




## [222. Count Complete Tree Node](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/222_CountCompleteTreeNodes.cpp)
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


## [260. Single Number III](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Medium/Code/260_SingleNumber_III.cpp)

### **Tóm tắt đề:**
* Cho một dãy số trong mảng và trong này luôn có 2 số xuất hiện 1 lần và các số còn lại sẽ xuất hiện đúng 2 lần (` hiểu là nếu mảng chỉ có 2 số thì luôn là 2 số xuất hiện 1 lần) .Tìm và in ra 2 số chỉ xuất hiện 1 lần 
* Bài yêu cầu viết với thời gian xử lý chương trình nhanh ( hiểu là dùng 1 vòng lặp là nhiều nhất`)
### **Ví dụ:**
`* Input: [1,2,1,3,2,5] `		`* Output: [3,5] hoặc [5,3] đều được`
`* Input: [-1,0]`			`* Output:[-1,0] hoặc [0,-1] đều được`
### Hướng dẫn làm:
* B1: Tạo 1 `vector` để lưu lại cặp số xuất hiện chỉ 1 lần
* B2: Sắp xếp lại mảng `nums` tăng dần rồi kiểm tra nếu số đầu tiên hoặc số cuối cùng khác với số ngay sau nó thì đẩy vào trong `vector`
* B3: Dùng 1 vòng lặp `for` để kiểm tra số xuất hiện 1 lần bằng cách so sánh với số đằng trước và đằng sau nó(lưu ý vòng lặp chỉ chạy từ `1` đến  `nums.size() -1`





## [869. Reordered Power of 2](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Medium/Code/869_ReorderedPowerof2.cpp)
### **Tóm tắt đề:**
- Nhập vào 1 số nguyên n. Sắp xếp lại các chữ số theo bất kì thứ tự nào (bao gồm cả thứ tự ban đầu), sao cho chữ số hàng đầu không phải chữ số 0.
- Trả về `true` khi và chỉ khi có thể sắp xếp số đó thành 1 số có thể viết dưới dạng 2^n
### **Ví dụ:**
- Input: n = 1
  - Output: true
- Input: n = 10
  - Output: false
- Input: n = 16
  - Output: true
- Input: n = 24
  - Output: false
- Input: n = 46
  - Output: true
### **Hướng dẫn giải:**
- Ý tưởng: sắp xếp *các chữ số* của `n` và các số có dạng 2^i theo cùng 1 trình tự, sau đó kiểm tra xem `n` có giống với số có dạng 2^i không (ví dụ: 2401 -> 0124 và 2^10 = 1024 -> 0124 => 2401 true)
- Tạo 1 vector string `power` để lưu các số có dạng 2^i (`i` chạy từ 0 đến 30 (giới hạn của đề bài chỉ cần thế là đủ) )
- Sắp xếp lại các kí tự của chuỗi trong vector vừa lưu (ví dụ: [1024,2048] -> [0124,0248])
- Chuyển `n` từ kiểu `int` sang kiểu `string` và sắp xếp lại các kí tự của `n`
- Tìm `n` sau khi đã sắp xếp trong vector `power`, nếu có trả về `true`, ngược lại tiếp tục chạy cho đến hết, nếu không tồn tại thì trả về `false`




 
