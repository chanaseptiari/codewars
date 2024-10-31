// fn main() {
//     println!("Main Flip");
// }

pub fn flip(dir: char, cubes: &[u32]) -> Vec<u32> {
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
