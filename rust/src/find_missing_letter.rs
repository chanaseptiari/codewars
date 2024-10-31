pub fn find_missing_letter(chars: &[char]) -> char {
    let arr: Vec<char> = (chars[0] as u8..=chars[chars.len() - 1] as u8)
        .into_iter()
        .map(|x| x as char)
        .collect();
    let diff: Vec<char> = arr.iter().cloned().filter(|x| !chars.contains(x)).collect();
    diff[0]
}
