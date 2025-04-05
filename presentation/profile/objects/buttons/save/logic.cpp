Click {
    string nameUser = Profile.Input(name)
    Profile.List(name).Add(new Object.User(nameUser))
    Profile.Input(name).value.Clear()
    color = #000000
    Service.Time.Sleep(100)
    color = #FFFFFF
}