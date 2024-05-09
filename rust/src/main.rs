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
