  k = l;
    while (i < n1 && j < n2) { 
        if (aux_left[i] <= aux_right[j]) { 
            arr[k] = aux_left[i]; 
            i++; 
        } 
        else { 
            arr[k] = aux_right[j]; 
            j++; 
        } 
        k++; 
    } 
 
    while (i < n1) { 
        arr[k] = aux_lef      




