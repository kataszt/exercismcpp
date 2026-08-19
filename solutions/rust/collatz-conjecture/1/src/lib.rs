pub fn collatz(mut n: u64) -> Option<u64> {
   // todo!("return Some(x) where x is the number of steps required to reach 1 starting with {n}")
    if n==0{
       return None; 
    }
    let mut steps: u64= 0;
    while n!=1{
        if n.is_multiple_of(2){
            n /= 2
        }else {
            n = n * 3 + 1;
        }
        steps += 1;
    }
    Some(steps)
}
