pub fn square(s: u32) -> u64 {
    let exponent = s-1;
    2u64.pow(exponent)
}

pub fn total() -> u64 {
    let mut sum: u64 = 0;
    for s in 1..=64{
        sum += square(s);
    }
    sum
}
