pub fn recite(start_bottles: u32, take_down: u32) -> String {
    let ints_into_words: [&str; 11] = ["no", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"];
    let ints_into_lower_words: [&str; 11] = ["no", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"];
    
    let mut song = String::new();
    for i in 0..take_down {
        let current = start_bottles - i;
        let next = current - 1;
        let current_word = ints_into_words[current as usize];
        let next_word = ints_into_lower_words[next as usize];

        let current_bottle_word = if current == 1 { "bottle" } else { "bottles" };
        let next_bottle_word = if next == 1 { "bottle" } else { "bottles" };

        let verse = format!("{} green {} hanging on the wall,\n", current_word, current_bottle_word);
        let fallen_down = "And if one green bottle should accidentally fall,\n".to_string();
        let remaining_bottles = format!("There'll be {} green {} hanging on the wall.\n", next_word, next_bottle_word);

        song.push_str(&verse);
        song.push_str(&verse);
        song.push_str(&fallen_down);
        song.push_str(&remaining_bottles);
        song.push_str("\n");
    }
    song
}