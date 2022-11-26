//using System.Collections;
//using System.Collections.Generic;
using UnityEngine;

public class InputController : MonoBehaviour
{
    Transform cam;
    public Joystick joystickMove;
    public Joystick joystickGiro;
    public Rigidbody rb;
    bool shoot;
    float rotateV;
    float rotateH;
    public float speed = 10f;
    public float speedGiro = 0.2f;

    // Start is called before the first frame update
    private void Start()
    {
        cam = Camera.main.transform;
    }

    // Update is called once per frame
    void Move()
    {
        rb.velocity = new Vector3(joystickMove.Horizontal * speed + Input.GetAxis("Horizontal"), rb.velocity.y, joystickMove.Vertical * speed + Input.GetAxis("Vertical"));
    }

    void ShootBt()
    {

    }

    void Rotate()
    {
        rotateH = joystickGiro.Horizontal * speedGiro;
        rotateV = -(joystickGiro.Vertical * speedGiro);
        cam.Rotate(rotateV, rotateH, 0);
    }

    private void Update()
    {
        Move();
        Rotate();
    }
}
