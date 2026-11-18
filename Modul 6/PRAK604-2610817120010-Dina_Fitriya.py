code = input()
pesan = input()

if len(code) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    hasil = ""
    bintang = 0
    pagar = 0

    for i in range(len(code)):
        if code[i] == pesan[i]:
            if code[i] == " ":
                hasil += " "
            else:
                hasil += "*"
                bintang += 1
        else:
            hasil += "#"
            pagar += 1

    print(hasil)
    print("* =", bintang)
    print("# =", pagar)

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")