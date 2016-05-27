Pod::Spec.new do |s|

  s.name         = "SYNavigationDropdownMenu"
  s.version      = "1.0"
  s.summary      = "A lightweight dropdown menu drops underneath navigation bar."
  s.homepage     = "https://github.com/Sunnyyoung/SYNavigationDropdownMenu"
  s.license      = "MIT"
  s.authors      = { 'Sunnyyoung' => 'https://github.com/Sunnyyoung' }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/Sunnyyoung/SYNavigationDropdownMenu.git", :tag => s.version }
  s.source_files = "SYNavigationDropdownMenu/SYNavigationDropdownMenu/*.{h,m}"
  s.requires_arc = true

end