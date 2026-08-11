use std::collections::HashSet;

pub fn sum_of_multiples(limit: u32, factors: &[u32]) -> u32 {
    let mut set_of_earned_energy: HashSet<u32> = HashSet::new();
    
    for &factor in factors{
        if factor == 0{
            continue;
        }
        
        for multiple in (factor..limit).step_by(factor as usize){
            set_of_earned_energy.insert(multiple);
        }
    }
    let earned_energy : u32= set_of_earned_energy.iter().sum();
    earned_energy
}