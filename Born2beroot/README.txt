Hi!

There is this useful guide: https://github.com/gemartin99/Born2beroot-Tutorial

Even though it the last part didn't work for me. If that is the case for you too, here there are some instructions:

For the last part of the bonus, I had a problem that It didn't let me install Openlitespeed. I resolved by:

0. Install gpg
sudo apt install gpg
1. Create a GPG keyring file:
sudo touch /etc/apt/trusted.gpg.d/custom-archive-keyring.gpg
2. Import the GPG key:
sudo gpg --keyserver keyserver.debian.com --recv-keys HEXKEYCODE (this is the number of the public key you get)
3. Add the key to the keyring file:
sudo gpg --export --armor HEXKEYCODE | sudo tee -a /etc/apt/trusted.gpg.d/custom-archive-keyring.gpg
If it still gives you error after the above passages:
1. Remove the existing custom keyring file:
sudo rm /etc/apt/trusted.gpg.d/custom-archive-keyring.gpg
2.  Import the GPG key directly into APT keyring:
sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-keys HEXKEYCODE (this is the number of the public key you get)
