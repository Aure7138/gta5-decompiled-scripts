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
	if (unk_0x2E9CF5C574019636())
	{
		unk_0xF391B7BD1F131C3F(500);
	}
	if (unk_0xD63E63DFACCEB80E(3))
	{
		func_5();
	}
	uLocal_18 = unk_0xC97D787CE7726A2F("instructional_buttons");
	while (!unk_0x5E3461E729DA646E(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x10243718C63A4D3E(uLocal_18, 255, 255, 255, 0, 0);
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
			unk_0x48F299599202B77A(uParam1, "CLEAR_ALL");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_CLEAR_SPACE");
			unk_0x4BD4D58838D3F8E5(200);
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(0);
			func_3(unk_0x34B4609B3C3F7CD6(2, 191, 1));
			func_2("PRESS A");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(1);
			func_3(unk_0x34B4609B3C3F7CD6(2, 194, 1));
			func_2("PRESS B");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(2);
			func_3(unk_0x34B4609B3C3F7CD6(2, 193, 1));
			func_2("PRESS X");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(3);
			func_3(unk_0x34B4609B3C3F7CD6(2, 192, 1));
			func_2("PRESS Y");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(80);
			unk_0x7E86CE5F658823DB();
			iLocal_17 = -1;
			break;
		
		case 1:
			unk_0x48F299599202B77A(uParam1, "CLEAR_ALL");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_CLEAR_SPACE");
			unk_0x4BD4D58838D3F8E5(200);
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(0);
			func_3(unk_0x34B4609B3C3F7CD6(2, 187, 1));
			func_2("DOWN");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(1);
			func_3(unk_0x34B4609B3C3F7CD6(2, 188, 1));
			func_2("UP");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(2);
			func_3(unk_0x34B4609B3C3F7CD6(2, 190, 1));
			func_2("LEFT");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(3);
			func_3(unk_0x34B4609B3C3F7CD6(2, 189, 1));
			func_2("RIGHT");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(80);
			unk_0x7E86CE5F658823DB();
			iLocal_17 = -1;
			break;
		
		case 2:
			unk_0x48F299599202B77A(uParam1, "CLEAR_ALL");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_CLEAR_SPACE");
			unk_0x4BD4D58838D3F8E5(200);
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(0);
			func_3(unk_0x34B4609B3C3F7CD6(2, 202, 1));
			func_2("BACK");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(80);
			unk_0x7E86CE5F658823DB();
			iLocal_17 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x0F79C8080022554A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_3(var uParam0)
{
	unk_0xD7A63C87F9B85B67(uParam0);
}

void func_4()
{
	if (Global_14372 == 0)
	{
		if (((((((((unk_0x859C6F0CEF1CB9FE(2, 189) || unk_0x859C6F0CEF1CB9FE(2, 190)) || unk_0x859C6F0CEF1CB9FE(2, 188)) || unk_0x859C6F0CEF1CB9FE(2, 187)) || unk_0x859C6F0CEF1CB9FE(2, 205)) || unk_0x859C6F0CEF1CB9FE(2, 206)) || unk_0x859C6F0CEF1CB9FE(2, 207)) || unk_0x859C6F0CEF1CB9FE(2, 208)) || unk_0x859C6F0CEF1CB9FE(2, 201)) || unk_0x859C6F0CEF1CB9FE(2, 202))
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
		if (unk_0x859C6F0CEF1CB9FE(2, 217))
		{
			iLocal_17 = 1;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 189))
		{
			iLocal_17 = 2;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 190))
		{
			iLocal_17 = 2;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 205))
		{
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 206))
		{
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 207))
		{
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 208))
		{
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 188))
		{
			iLocal_17 = 2;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 187))
		{
			iLocal_17 = 2;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 201))
		{
			iLocal_17 = 1;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 202))
		{
			iLocal_17 = 0;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 203))
		{
			iLocal_17 = 1;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 204))
		{
			iLocal_17 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0xAA7F469826C4FBBF(0);
	unk_0x76D57BAF1F432EA7(&uLocal_18);
	unk_0xE60DEFFB2A853900();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_11();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
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
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
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
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
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

