pub fn nth(n: u32) -> u32 {
    let mut candidate = 2;
    let mut count = 0;
    loop {
        if is_prime(candidate){
            if count == n{
                return candidate;
            }
            count += 1;   
        }
        candidate += 1;
    }
}

fn is_prime(x: u32)-> bool{
    !(2..x).any(|divisor| x % divisor ==0)
}