pub fn factors(n: u64) -> Vec<u64> {
    let mut divisor = 2;
    let mut remainder = n;
    let mut vector_of_factors : Vec<u64> = Vec::new();     
    loop {
        if remainder ==1 {
            break;
        }
        
        while remainder % divisor ==0 {
            remainder /= divisor;
            vector_of_factors.push(divisor);
        }
        divisor+=1;
    }
    vector_of_factors
}
        
        
