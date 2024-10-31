pub fn series_sum(n: u32) -> String {
    let mut index = 1.0;
    let mut res: f32 = 0.0;

    if n != 0 {
        for _ in 1..=n {
            res += 1.0 / index;
            index += 3.0;
        }
    }
    format!("{:.2}", res)
}
