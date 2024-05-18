fn main() {
    println!("Hello, world!");
    
}

#[test]
fn hello_test(){
    println!("Hello Unit Test");
}

fn flip(dir: char, cubes: &[u32]) -> Vec<u32> {
    let mut cubes = cubes.to_vec();

    if dir == 'R' {
        cubes.sort();
    }
    if dir == 'L' {
        cubes.sort();
        cubes.reverse()
    }

    return cubes;
}

#[test]
fn flip_test(){
    println!("{:?}",flip('R', &vec![3, 2, 1, 2]));
    println!("{:?}",flip('L', &vec![1, 4, 5, 3, 5]));
}

fn sum_or_product(list: &[i64], n: usize) -> String {
    // println!("\n{}\n",n);
    let mut arr = list.to_vec();arr.sort();
    let product:i64 = arr[..n].iter().product();
    let sum:i64 = arr[arr.len()-n..].iter().sum();
    
    // println!("{:?} {:?}",arr[..n].iter(),arr[arr.len()-n..].iter());
    // println!("{:?} {:?}",product,sum);
    
    if sum > product {
        "sum".to_string()
    } else if sum < product {
        "product".to_string()
    } else {
        "same".to_string()
    }
}

#[test]
fn sum_or_product_test(){
    println!("{}",sum_or_product(&[1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 4));
    println!("{}",sum_or_product(&[10, 41, 8, 16, 20, 36, 9, 13, 20], 3));
    println!("{}",sum_or_product(&[10, 20, 3, 30, 5, 4], 3));
    
}

fn odd_count(n: u64) -> u64 {
    // let mut arr=vec![]; 
    // for i in 1..n {
    //     if i % 2 == 1 {
    //         arr.push(i)
    //     }
    // }
    // return arr.len() as u64;
    n/2
}

#[test]
fn odd_count_test(){
    println!("{}",odd_count(15));
    println!("{}",odd_count(15023));
}

// fn unique_in_order<T>(sequence:T)
fn unique_in_order<T>(sequence: T) -> Vec<T::Item>
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

#[test]
fn unique_in_order_test() {
    println!("{:?}",unique_in_order("AAAABBBCCDAABBB".chars()));
    println!("{:?}",unique_in_order("ABBCcAD".chars()));
}


fn find_missing_letter(chars: &[char]) -> char {
    let arr: Vec<char> = (chars[0] as u8..=chars[chars.len()-1] as u8).into_iter().map(|x| x as char).collect();
    let diff: Vec<char> = arr.iter().cloned().filter(|x|!chars.contains(x)).collect();
    diff[0]
}

#[test]
fn find_missing_letter_tests() {
    println!("{}",find_missing_letter(&['a', 'b', 'c', 'd', 'f']));
    println!("{}",find_missing_letter(&['O', 'Q', 'R', 'S']));
}
