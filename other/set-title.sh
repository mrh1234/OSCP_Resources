#/bin/bash

function set-title() {
  if [[ -z "$ORIG" ]]; then
    ORIG=$PS1
  fi

  if [[ -n "$1" ]]; then
        PS1='\[\e]0;'$1'\a\]\[\033[;32m\]┌──${debian_chroot:+($debian_chroot)──}${VIRTUAL_ENV:+(\[\033[0;1m\]$(basename $VIRTUAL_ENV)\[\033[;32m\])}(\[\033[1;34m\]\u㉿\h\[\033[;32m\])-[\[\033[0;1m\]\w\[\033[;32m\]]\n\[\033[;32m\]└─\[\033[1;34m\]\$\[\033[0m\] '

  fi
}
