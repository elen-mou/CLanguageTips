

// Special characters' hex codes are of a single digit.
int print_sp_ch() {
  char ch = '\r';
  printf("%x\n", ch);
  return 0;
}

// Masking is a technique used to print a hex code without
// the '0x' at the start.
int print_with_mask() {
  char ch = 'a';
  printf("%x\n", ch & 0xff);
  return 0;
}


int main(int argc, char **argv) {
    print_sp_ch();
    print_with_mask();
}
