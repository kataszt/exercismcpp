pub fn build_proverb(list: &[&str]) -> String {
    let mut proverb = String::new();
    if list.is_empty(){
        return proverb;
    }
    if list.len()==1{
        let line = format!("And all for the want of a {}.", list[0]);
        proverb.push_str(&line);
        return proverb;
    }
    for i in 0..=list.len()-2{
        let line = format!("For want of a {} the {} was lost.\n", list[i], list[i+1]);
        proverb.push_str(&line);    
    }
    let line = format!("And all for the want of a {}.", list[0]);
    proverb.push_str(&line);
    proverb 
}

