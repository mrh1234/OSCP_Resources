#!/bin/bash

echo "############################################"
echo "### doing nmap scan for $ip  ###"
echo "############################################"
echo ""

sudo nmap -vv -sS -Pn -T5 -p- $ip -oN nmap_big.txt --min-rate=10000

echo "############################################"
echo "###        Doing -sC and -sV now         ###"
echo "############################################"
echo ""

ports=$(cat nmap_big.txt | grep -ioe '.*/tcp' | tr -d '/tcp' | tr '\n' ',')

sudo nmap -vv -sC -sV -oN nmap.txt -p $ports $ip

echo "############################################"
echo "###        Doing UDP Top 100 now         ###"
echo "############################################"
echo ""

sudo nmap -sU -vv --top-ports 100 -oN nmap_udp_small.txt $ip 
