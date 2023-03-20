#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	if (unk_0xC2C705ED6124A7C2())
	{
		unk_0x662E87A876F1069D(500);
	}
	if (unk_0x7547D7CF93115D6D(3))
	{
		func_5();
	}
	uLocal_18 = unk_0xAFBDE0BB5C885026("instructional_buttons");
	while (!unk_0xE908465F9CDF4F1A(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4A383EC377D451D0(uLocal_18, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_17, uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF48C88BD1F0007E8(uParam1, "CLEAR_ALL");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_CLEAR_SPACE");
			unk_0x876C5D0739031E15(200);
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_DATA_SLOT");
			unk_0x876C5D0739031E15(0);
			func_3(unk_0xB588E50C18B98D3F(2, 191, 1));
			func_2("PRESS A");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_DATA_SLOT");
			unk_0x876C5D0739031E15(1);
			func_3(unk_0xB588E50C18B98D3F(2, 194, 1));
			func_2("PRESS B");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_DATA_SLOT");
			unk_0x876C5D0739031E15(2);
			func_3(unk_0xB588E50C18B98D3F(2, 193, 1));
			func_2("PRESS X");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_DATA_SLOT");
			unk_0x876C5D0739031E15(3);
			func_3(unk_0xB588E50C18B98D3F(2, 192, 1));
			func_2("PRESS Y");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x876C5D0739031E15(0);
			unk_0x876C5D0739031E15(0);
			unk_0x876C5D0739031E15(0);
			unk_0x876C5D0739031E15(80);
			unk_0xA52FC2467E672B55();
			iLocal_17 = -1;
			break;
		
		case 1:
			unk_0xF48C88BD1F0007E8(uParam1, "CLEAR_ALL");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_CLEAR_SPACE");
			unk_0x876C5D0739031E15(200);
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_DATA_SLOT");
			unk_0x876C5D0739031E15(0);
			func_3(unk_0xB588E50C18B98D3F(2, 187, 1));
			func_2("DOWN");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_DATA_SLOT");
			unk_0x876C5D0739031E15(1);
			func_3(unk_0xB588E50C18B98D3F(2, 188, 1));
			func_2("UP");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_DATA_SLOT");
			unk_0x876C5D0739031E15(2);
			func_3(unk_0xB588E50C18B98D3F(2, 190, 1));
			func_2("LEFT");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_DATA_SLOT");
			unk_0x876C5D0739031E15(3);
			func_3(unk_0xB588E50C18B98D3F(2, 189, 1));
			func_2("RIGHT");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x876C5D0739031E15(0);
			unk_0x876C5D0739031E15(0);
			unk_0x876C5D0739031E15(0);
			unk_0x876C5D0739031E15(80);
			unk_0xA52FC2467E672B55();
			iLocal_17 = -1;
			break;
		
		case 2:
			unk_0xF48C88BD1F0007E8(uParam1, "CLEAR_ALL");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_CLEAR_SPACE");
			unk_0x876C5D0739031E15(200);
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_DATA_SLOT");
			unk_0x876C5D0739031E15(0);
			func_3(unk_0xB588E50C18B98D3F(2, 202, 1));
			func_2("BACK");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x876C5D0739031E15(0);
			unk_0x876C5D0739031E15(0);
			unk_0x876C5D0739031E15(0);
			unk_0x876C5D0739031E15(80);
			unk_0xA52FC2467E672B55();
			iLocal_17 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x44F4D219F8513945(sParam0);
	unk_0x113A6F657EE871A3();
}

void func_3(var uParam0)
{
	unk_0x3F8884039D21AA69(uParam0);
}

void func_4()
{
	if (Global_14372 == 0)
	{
		if (((((((((unk_0xBD883E84B4B6E14E(2, 189) || unk_0xBD883E84B4B6E14E(2, 190)) || unk_0xBD883E84B4B6E14E(2, 188)) || unk_0xBD883E84B4B6E14E(2, 187)) || unk_0xBD883E84B4B6E14E(2, 205)) || unk_0xBD883E84B4B6E14E(2, 206)) || unk_0xBD883E84B4B6E14E(2, 207)) || unk_0xBD883E84B4B6E14E(2, 208)) || unk_0xBD883E84B4B6E14E(2, 201)) || unk_0xBD883E84B4B6E14E(2, 202))
		{
			Global_14372 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14372 = 0;
	}
	if (Global_14372 == 0)
	{
		if (unk_0xBD883E84B4B6E14E(2, 217))
		{
			iLocal_17 = 1;
		}
		if (unk_0xBD883E84B4B6E14E(2, 189))
		{
			iLocal_17 = 2;
		}
		if (unk_0xBD883E84B4B6E14E(2, 190))
		{
			iLocal_17 = 2;
		}
		if (unk_0xBD883E84B4B6E14E(2, 205))
		{
		}
		if (unk_0xBD883E84B4B6E14E(2, 206))
		{
		}
		if (unk_0xBD883E84B4B6E14E(2, 207))
		{
		}
		if (unk_0xBD883E84B4B6E14E(2, 208))
		{
		}
		if (unk_0xBD883E84B4B6E14E(2, 188))
		{
			iLocal_17 = 2;
		}
		if (unk_0xBD883E84B4B6E14E(2, 187))
		{
			iLocal_17 = 2;
		}
		if (unk_0xBD883E84B4B6E14E(2, 201))
		{
			iLocal_17 = 1;
		}
		if (unk_0xBD883E84B4B6E14E(2, 202))
		{
			iLocal_17 = 0;
		}
		if (unk_0xBD883E84B4B6E14E(2, 203))
		{
			iLocal_17 = 1;
		}
		if (unk_0xBD883E84B4B6E14E(2, 204))
		{
			iLocal_17 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0x1757405122DE8566(0);
	unk_0x86FF04BBB2EC839F(&uLocal_18);
	unk_0x883793591E631A3B();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_11();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_10(0))
		{
			func_7(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_7(int iParam0)
{
	if (Global_14551)
	{
		func_9(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_8())
	{
		Global_14393.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

