pub fn is_armstrong_number(num: u32) -> bool {
    let number: u32 = num;
    let s : String = num.to_string();
    let digit_count = s.chars().count();
    let mut value : u32 = 0;
    for c in s.chars() {
        let curr_digit : u32 = c.to_digit(10).unwrap();
        value = value + curr_digit.pow(digit_count as u32);
        }
    value == num
}
