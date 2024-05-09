fn main() {
    println!("Hello, world!");
    
}

#[test]
fn hello_test(){
    println!("Hello Unit Test")
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
