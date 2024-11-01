func countOfAtoms(formula string) string {
	mul := 1
	muls := []int{}
	digits := 0
	base := 1
	atom := ""
	atoms := make(map[string]int)

	for i := len(formula) - 1; i >= 0; i-- {
		if formula[i] >= '0' && formula[i] <= '9' {
			digits += base * int(formula[i]-'0')
			base *= 10
		} else if formula[i] == ')' {
			if digits == 0 {
				digits = 1
			}
			muls = append(muls, digits)
			mul *= digits
			digits = 0
			base = 1
		} else if formula[i] == '(' {
			mul /= muls[len(muls)-1]
			muls = muls[:len(muls)-1]
		} else if formula[i] >= 'a' && formula[i] <= 'z' {
			atom = string(formula[i]) + atom
		} else { // formula[i] >= 'A' && formula[i] <= 'Z'
			atom = string(formula[i]) + atom
			if digits == 0 {
				digits = 1
			}
			atoms[atom] += mul * digits
			digits = 0
			base = 1
			atom = ""
		}
	}

	keys := make([]string, 0, len(atoms))
	for k := range atoms {
		keys = append(keys, k)
	}
	sort.Strings(keys)

	var res strings.Builder
	for _, k := range keys {
		res.WriteString(k)
		if atoms[k] != 1 {
			res.WriteString(strconv.Itoa(atoms[k]))
		}
	}

	return res.String()
}

// WA
func countOfAtoms(formula string) string {
    mul := 1
	muls := []int{}
	digits := 0
	base := 1
	atom := ""
	atoms := map[string]int{}
	for i := len(formula) - 1; i >= 0; i-- {
		if formula[i] >= '0' && formula[i] <= '9' {
			digits += base * int(formula[i] - '0')
			base *= 10
		} else if formula[i] == ')' {
			if digits == 0 {
				digits = 1
			}
			muls = append(muls, digits)
			mul *= digits
			digits = 0
			base = 1
		} else if formula[i] == '(' {
			mul /= muls[len(muls)-1]
			muls = muls[:len(muls)-1]
		} else if formula[i] >= 'a' && formula[i] <= 'z' {
			atom = string(formula[i]) + atom
		} else {
			atom = string(formula[i]) + atom
			if digits == 0 {
				digits = 1
			}
			atoms[atom] += mul * digits
			digits = 0
			base = 1
			atom = ""
		}
	}

	res := ""
	for k, v := range atoms {
		res += k
		if v != 1 {
			res += strconv.Itoa(v)
		}
	}

	return res
}
