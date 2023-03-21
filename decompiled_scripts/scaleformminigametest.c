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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	uLocal_20 = unk_0x29F0B4D7EFF08BF6(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0x8359CF51370FC969(500);
	}
	if (unk_0x76BF814AB8D4CAB8(3))
	{
		func_2();
	}
	uLocal_18 = unk_0xBD7D7877C82BE42F("p_bubblegum");
	while (!unk_0x5C716BBF766E1C70(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			uLocal_19 = unk_0x5E35D8CCDF065701("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x5400DC5FAEBF30F0(uLocal_19))
			{
				unk_0x444064C4BEF055A9(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0x417F9BCF7BCE9999(uLocal_19, 0.01f);
				unk_0x1E387981109B2EC3(uLocal_19, 0.02f);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
			}
			unk_0xDC0EBFC7730AA226(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0xC1C40A3B8772D9BA(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14432 == 0)
	{
		if (unk_0x02EA7C5633421A0F(2, 189) || unk_0x02EA7C5633421A0F(2, 190))
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
		if (unk_0xFC0C00F9DE2AEC93(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x02EA7C5633421A0F(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x02EA7C5633421A0F(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x76F4FB5EFF5BDED5(uParam0, "SET_INPUT_EVENT");
			unk_0x22DD5585E00B80C3(10);
			unk_0x954263F3D07BEFC2(fLocal_25);
			unk_0xE2B30EB9B14EEAB2();
		}
		if (unk_0xFC0C00F9DE2AEC93(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x02EA7C5633421A0F(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x02EA7C5633421A0F(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x76F4FB5EFF5BDED5(uParam0, "SET_INPUT_EVENT");
			unk_0x22DD5585E00B80C3(11);
			unk_0x954263F3D07BEFC2(fLocal_28);
			unk_0xE2B30EB9B14EEAB2();
		}
		if (unk_0xFC0C00F9DE2AEC93(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x02EA7C5633421A0F(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x02EA7C5633421A0F(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x76F4FB5EFF5BDED5(uParam0, "SET_INPUT_EVENT");
			unk_0x22DD5585E00B80C3(8);
			unk_0x954263F3D07BEFC2(fLocal_31);
			unk_0xE2B30EB9B14EEAB2();
		}
		if (unk_0xFC0C00F9DE2AEC93(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x02EA7C5633421A0F(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x02EA7C5633421A0F(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x76F4FB5EFF5BDED5(uParam0, "SET_INPUT_EVENT");
			unk_0x22DD5585E00B80C3(9);
			unk_0x954263F3D07BEFC2(fLocal_34);
			unk_0xE2B30EB9B14EEAB2();
		}
		if (unk_0xFC0C00F9DE2AEC93(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x02EA7C5633421A0F(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x02EA7C5633421A0F(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x76F4FB5EFF5BDED5(uParam0, "SET_INPUT_EVENT");
			unk_0x22DD5585E00B80C3(17);
			unk_0x954263F3D07BEFC2(fLocal_37);
			unk_0xE2B30EB9B14EEAB2();
		}
		if (unk_0xFC0C00F9DE2AEC93(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x02EA7C5633421A0F(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x02EA7C5633421A0F(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x76F4FB5EFF5BDED5(uParam0, "SET_INPUT_EVENT");
			unk_0x22DD5585E00B80C3(15);
			unk_0x954263F3D07BEFC2(fLocal_40);
			unk_0xE2B30EB9B14EEAB2();
		}
		if (unk_0xFC0C00F9DE2AEC93(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x02EA7C5633421A0F(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x02EA7C5633421A0F(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x76F4FB5EFF5BDED5(uParam0, "SET_INPUT_EVENT");
			unk_0x22DD5585E00B80C3(16);
			unk_0x954263F3D07BEFC2(fLocal_43);
			unk_0xE2B30EB9B14EEAB2();
		}
		if (unk_0xFC0C00F9DE2AEC93(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x02EA7C5633421A0F(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x02EA7C5633421A0F(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x76F4FB5EFF5BDED5(uParam0, "SET_INPUT_EVENT");
			unk_0x22DD5585E00B80C3(14);
			unk_0x954263F3D07BEFC2(fLocal_46);
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

void func_2()
{
	if (unk_0x5400DC5FAEBF30F0(uLocal_19))
	{
		unk_0x13AD763DBD687842(uLocal_19, 0);
	}
	unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0xDF94C6DB72E69D64(0);
	unk_0xEFF1F12403847394(1);
	unk_0xEBE532BFFE618875(&uLocal_18);
	unk_0x810C5D6462DD69E6();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0xD2A9C3F486236CC5(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (Global_14615)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14453.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)
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

void func_8()
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

