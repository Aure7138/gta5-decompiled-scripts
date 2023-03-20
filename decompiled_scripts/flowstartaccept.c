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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	if (unk_0xD63E63DFACCEB80E(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x708CE249B4F97BF8()) && unk_0x32334E50A46287DA())
	{
		unk_0x0E294D1F9E68FE58(1);
		if (!unk_0x2E9CF5C574019636())
		{
			if (!unk_0x351E8373AE3D741D())
			{
				unk_0xC6EA7B53F52F1DF9(800);
			}
		}
		iLocal_19 = unk_0xC97D787CE7726A2F("MP_BIG_MESSAGE_FREEMODE");
		iLocal_20 = unk_0xC97D787CE7726A2F("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x5E3461E729DA646E(iLocal_19) || !unk_0x5E3461E729DA646E(iLocal_20))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x48F299599202B77A(iLocal_19, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x7E86CE5F658823DB();
		unk_0x48F299599202B77A(iLocal_20, "SET_DATA_SLOT_EMPTY");
		unk_0x7E86CE5F658823DB();
		unk_0x48F299599202B77A(iLocal_20, "SET_DATA_SLOT");
		unk_0x4BD4D58838D3F8E5(0);
		func_4(unk_0x34B4609B3C3F7CD6(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0x7E86CE5F658823DB();
		unk_0x48F299599202B77A(iLocal_20, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x63E5FA5DEE979BD6(0);
		unk_0x7E86CE5F658823DB();
		while (!unk_0x2E9CF5C574019636())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x41D8277E3186F4D9();
		while (!iLocal_21)
		{
			unk_0xF4BEBA2136120C64();
			unk_0xF36D3CA21410B7D5(7);
			unk_0x10243718C63A4D3E(iLocal_19, 255, 255, 255, 0, 0);
			unk_0x10243718C63A4D3E(iLocal_20, 255, 255, 255, 0, 0);
			if (unk_0x859C6F0CEF1CB9FE(2, 201))
			{
				iLocal_21 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x0E294D1F9E68FE58(0);
		func_3(1, 1);
		func_1();
	}
	Global_68514.f_1 = 0;
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8270.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_90001.f_7 = iParam0;
	Global_90001.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0xD7A63C87F9B85B67(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x0F79C8080022554A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_6()
{
	if (iLocal_19 != 0)
	{
		unk_0x76D57BAF1F432EA7(&iLocal_19);
	}
	if (iLocal_20 != 0)
	{
		unk_0x76D57BAF1F432EA7(&iLocal_20);
	}
	unk_0xF36D3CA21410B7D5(4);
	unk_0x0E294D1F9E68FE58(0);
	unk_0xE60DEFFB2A853900();
}

