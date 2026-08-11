pub fn raindrops(n: u32) -> String {
    let mut sound : String = String::new();
    let nr_as_str : String = n.to_string();    
    if n.is_multiple_of(3){
        sound.push_str("Pling");
    }
    if n.is_multiple_of(5){
        sound.push_str("Plang");    
    }
    if n.is_multiple_of(7){
        sound.push_str("Plong");
    }
    if sound.is_empty() {
        sound.push_str(&nr_as_str);
    }
    sound
}
    

