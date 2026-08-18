pub fn reply(message: &str) -> &str {
    let answer;
    if is_silence(message) {
        answer = "Fine. Be that way!";
    } else if is_yelling(message) && is_question(message){
        answer = "Calm down, I know what I'm doing!";
    } else if is_yelling(message){
        answer = "Whoa, chill out!";
    } else if is_question(message){
        answer = "Sure.";
    } else {answer = "Whatever."}
    answer
}
        
    
pub fn is_silence(message: &str) -> bool {
    message.trim().is_empty()
}

pub fn is_yelling(message: &str) -> bool {
    let has_lowercase = message.chars().any(|c| c.is_lowercase());
    let has_uppercase = message.chars().any(|c| c.is_uppercase());
    if has_lowercase {
        false
    } else {
        has_uppercase
    }
}

pub fn is_question(message: &str) -> bool{
    message.trim().ends_with("?")
}