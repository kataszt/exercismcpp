use std::collections::HashSet;

pub fn sum_of_multiples(limit: u32, factors: &[u32]) -> u32 {
    let mut set_of_earned_energy: HashSet<u32> = HashSet::new();
    
    for i in 0..factors.len(){
        if factors[i] == 0{
            continue
        }
        let current_factor = factors[i];
        for current_factor in (current_factor..limit).step_by(current_factor as usize){
            let current_value = current_factor;
            set_of_earned_energy.insert(current_value);
        }
    }
    let earned_energy : u32= set_of_earned_energy.iter().sum();
    earned_energy
}