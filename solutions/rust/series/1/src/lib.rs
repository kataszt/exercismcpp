pub fn series(digits: &str, len: usize) -> Vec<String> {
    // todo!("What are the series of length {len} in string {digits:?}")
    let chars: Vec<char> = digits.chars().collect();
    chars.windows(len).map(|window| window.iter().collect::<String>()).collect()
    
}
