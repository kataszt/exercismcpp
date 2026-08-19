pub fn egg_count(mut display_value: u32) -> usize {
    let mut pickup: usize =0;

    while display_value > 0{
        if display_value%2 != 0{
            pickup +=1;
        }
        display_value /=2;
    }
    pickup
}
