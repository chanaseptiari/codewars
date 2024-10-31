pub fn unique_in_order<T>(sequence: T) -> Vec<T::Item>
where
    T: std::iter::IntoIterator,
    T::Item: std::cmp::PartialEq + std::fmt::Debug,
{
    // let mut res = vec![];

    // for item in sequence {
    //     if res.is_empty() || *res.last().unwrap() != item {
    //         res.push(item);
    //     }
    // }
    // res
    let mut v: Vec<_> = sequence.into_iter().collect();
    v.dedup();
    v
}
