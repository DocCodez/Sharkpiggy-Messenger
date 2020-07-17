//
//  Indicator.swift
//  Sharkpiggy Messenger
//
//  Created by Adiel Hernandez on 7/17/20.
//  Copyright © 2020 Adiel Hernandez. All rights reserved.
//

import SwiftUI

struct Indicator : UIViewRepresentable {
    
    func makeUIView(context: UIViewRepresentableContext<Indicator>) -> UIActivityIndicatorView {
        
        let indicator = UIActivityIndicatorView(style: .large)
        indicator.startAnimating()
        return indicator
    }
    
    func updateUIView(_ uiView: UIActivityIndicatorView, context: UIViewRepresentableContext<Indicator>) {
        
        
    }
}
