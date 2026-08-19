fn plant_name(c: char) -> &'static str{
   match c {
        'G' => "grass",
        'C' => "clover",
        'R' => "radishes",
        'V' => "violets",
        _ => panic!("unknown plant code"),
    }
}


pub fn plants(diagram: &str, student: &str) -> Vec<&'static str> {
    //todo!("based on the {diagram}, determine the plants the {student} is responsible for");

    let names = ["Alice", "Bob", "Charlie", "David", "Eve", "Fred", "Ginny", "Harriet", "Ileana", "Joseph", "Kincaid", "Larry"];
    let rows: Vec<&str> = diagram.split('\n').collect();
    let row0 = rows[0];
    let row1 = rows[1];
    let index = names.iter().position(|&name| name == student).unwrap();
    let start = index *2;
    let mut result: Vec<&'static str> = Vec::new();
    result.push(plant_name(row0.chars().nth(start).unwrap()));
    result.push(plant_name(row0.chars().nth(start + 1).unwrap()));
    result.push(plant_name(row1.chars().nth(start).unwrap()));
    result.push(plant_name(row1.chars().nth(start + 1).unwrap()));
    result
}
