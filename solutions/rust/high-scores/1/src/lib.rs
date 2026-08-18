#[derive(Debug)]
pub struct HighScores{
    scores : Vec<u32>,
}

impl HighScores {
    pub fn new(scores: &[u32]) -> Self {
        Self{
            scores: scores.to_vec(),
        }
    }
    pub fn scores(&self) -> &[u32] {
        &self.scores
    }

    pub fn latest(&self) -> Option<u32> {
        if self.scores.len() == 0{
            None
        } else {
            self.scores.last().copied()  
        }
    }

    pub fn personal_best(&self) -> Option<u32> {
        let mut highest_score_index = 0;
        if self.scores.len() == 0{
            return None;
        }
        for i in 0..self.scores.len(){
            if self.scores[i] > self.scores[highest_score_index]{
                highest_score_index = i;
            }
        }
        Some(self.scores[highest_score_index])
    }
            

    pub fn personal_top_three(&self) -> Vec<u32> {
        let mut sorted_scores = self.scores.to_vec();
        sorted_scores.sort();
        sorted_scores.reverse();
        sorted_scores.truncate(3);
        sorted_scores
    }
}
