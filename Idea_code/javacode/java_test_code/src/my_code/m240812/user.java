package my_code.m240812;

public class user {
    private String userName;
    private String passworld;
    private String email;
    private String gender;
    private int age;

    public user() {
    }

    public String getUserName() {
        return userName;
    }

    public String getPassworld() {
        return passworld;
    }

    public String getEmail() {
        return email;
    }

    public String getGender() {
        return gender;
    }

    public int getAge() {
        return age;
    }

    public void setUserName(String userName) {
        this.userName = userName;
    }

    public void setPassworld(String passworld) {
        this.passworld = passworld;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public void setAge(int age) {
        this.age = age;
    }
}
