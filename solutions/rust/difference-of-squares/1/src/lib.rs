pub fn square_of_sum(n: u32) -> u32 {
    let mut value: u32 = 0;
    for i in 1..=n{
        value = value + i;
        
    };
    value = value * value;
    value
}

pub fn sum_of_squares(n: u32) -> u32 {
    let mut value: u32 = 0;
    let mut current_integer :u32 = 0 ;    
    for i in 1..=n{
        current_integer = i* i;
        value = value + current_integer; 
    };    
    value    
}

pub fn difference(n: u32) -> u32 {
    square_of_sum(n) - sum_of_squares(n)
}
