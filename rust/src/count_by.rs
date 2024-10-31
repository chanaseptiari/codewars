pub fn count_by(x: u32, n: u32) -> Vec<u32> {
    // let mut res: Vec<u32> = Vec::new();

    // for index in 1 ..= n {
    //     res.push(index * x as u32);
    //     // res.push(n)
    // }

    // res

    (1..=n).map(|a| a * x).collect()
}
