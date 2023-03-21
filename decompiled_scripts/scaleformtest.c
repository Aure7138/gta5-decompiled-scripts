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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
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
	iLocal_17 = -1;
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0x8359CF51370FC969(500);
	}
	if (unk_0x76BF814AB8D4CAB8(3))
	{
		func_5();
	}
	uLocal_19 = unk_0xBD7D7877C82BE42F("instructional_buttons");
	while (!unk_0x5C716BBF766E1C70(uLocal_19))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x5E70D9959D6F2350(uLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, uLocal_19);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x76F4FB5EFF5BDED5(uParam1, "CLEAR_ALL");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_CLEAR_SPACE");
			unk_0x22DD5585E00B80C3(200);
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_DATA_SLOT");
			unk_0x22DD5585E00B80C3(0);
			func_3(unk_0x305BC30EAC3E9BF4(2, 191, 1));
			func_2("PRESS A");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_DATA_SLOT");
			unk_0x22DD5585E00B80C3(1);
			func_3(unk_0x305BC30EAC3E9BF4(2, 194, 1));
			func_2("PRESS B");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_DATA_SLOT");
			unk_0x22DD5585E00B80C3(2);
			func_3(unk_0x305BC30EAC3E9BF4(2, 193, 1));
			func_2("PRESS X");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_DATA_SLOT");
			unk_0x22DD5585E00B80C3(3);
			func_3(unk_0x305BC30EAC3E9BF4(2, 192, 1));
			func_2("PRESS Y");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(80);
			unk_0xE2B30EB9B14EEAB2();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0x76F4FB5EFF5BDED5(uParam1, "CLEAR_ALL");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_CLEAR_SPACE");
			unk_0x22DD5585E00B80C3(200);
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_DATA_SLOT");
			unk_0x22DD5585E00B80C3(0);
			func_3(unk_0x305BC30EAC3E9BF4(2, 187, 1));
			func_2("DOWN");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_DATA_SLOT");
			unk_0x22DD5585E00B80C3(1);
			func_3(unk_0x305BC30EAC3E9BF4(2, 188, 1));
			func_2("UP");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_DATA_SLOT");
			unk_0x22DD5585E00B80C3(2);
			func_3(unk_0x305BC30EAC3E9BF4(2, 190, 1));
			func_2("LEFT");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_DATA_SLOT");
			unk_0x22DD5585E00B80C3(3);
			func_3(unk_0x305BC30EAC3E9BF4(2, 189, 1));
			func_2("RIGHT");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(80);
			unk_0xE2B30EB9B14EEAB2();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0x76F4FB5EFF5BDED5(uParam1, "CLEAR_ALL");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_CLEAR_SPACE");
			unk_0x22DD5585E00B80C3(200);
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_DATA_SLOT");
			unk_0x22DD5585E00B80C3(0);
			func_3(unk_0x305BC30EAC3E9BF4(2, 202, 1));
			func_2("BACK");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(80);
			unk_0xE2B30EB9B14EEAB2();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_3(var uParam0)
{
	unk_0xC34A54899652DAAF(uParam0);
}

void func_4()
{
	if (Global_14432 == 0)
	{
		if (((((((((unk_0x02EA7C5633421A0F(2, 189) || unk_0x02EA7C5633421A0F(2, 190)) || unk_0x02EA7C5633421A0F(2, 188)) || unk_0x02EA7C5633421A0F(2, 187)) || unk_0x02EA7C5633421A0F(2, 205)) || unk_0x02EA7C5633421A0F(2, 206)) || unk_0x02EA7C5633421A0F(2, 207)) || unk_0x02EA7C5633421A0F(2, 208)) || unk_0x02EA7C5633421A0F(2, 201)) || unk_0x02EA7C5633421A0F(2, 202))
		{
			Global_14432 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14432 = 0;
	}
	if (Global_14432 == 0)
	{
		if (unk_0x02EA7C5633421A0F(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0x02EA7C5633421A0F(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0x02EA7C5633421A0F(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0x02EA7C5633421A0F(2, 205))
		{
		}
		if (unk_0x02EA7C5633421A0F(2, 206))
		{
		}
		if (unk_0x02EA7C5633421A0F(2, 207))
		{
		}
		if (unk_0x02EA7C5633421A0F(2, 208))
		{
		}
		if (unk_0x02EA7C5633421A0F(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0x02EA7C5633421A0F(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0x02EA7C5633421A0F(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0x02EA7C5633421A0F(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0x02EA7C5633421A0F(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0x02EA7C5633421A0F(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0xDF94C6DB72E69D64(0);
	unk_0xEBE532BFFE618875(&uLocal_19);
	unk_0x810C5D6462DD69E6();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_11();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0xD2A9C3F486236CC5(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_10(0))
		{
			func_7(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_7(int iParam0)
{
	if (Global_14615)
	{
		func_9(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_8())
	{
		Global_14453.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
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
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

