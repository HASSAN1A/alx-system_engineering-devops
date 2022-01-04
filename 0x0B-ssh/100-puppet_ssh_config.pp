# Turns off password authentication and uses school key
include stdlib

file_line { 'private key':
  path   => '/etc/ssh/ssh_config',
  line   => 'IdentityFile ~/.ssh/school',
}

file_line { 'refuse to authenticate':
  path   => '/etc/ssh/ssh_config',
  line   => 'PasswordAuthentication no',
}