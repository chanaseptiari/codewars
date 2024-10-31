pub fn sum_or_product(list: &[i64], n: usize) -> String {
    let mut arr = list.to_vec();
    arr.sort();

    let product: i64 = arr[..n].iter().product();
    let sum: i64 = arr[arr.len() - n..].iter().sum();

    if sum > product {
        "sum".to_string()
    } else if sum < product {
        "product".to_string()
    } else {
        "same".to_string()
    }
}
