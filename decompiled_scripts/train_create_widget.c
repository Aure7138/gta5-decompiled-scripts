#region Local Var
	var uLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	var uLocal_4 = 0;
	float fLocal_5 = 0f;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	bool bLocal_8 = 0;
	int iLocal_9 = 0;
#endregion

void __EntryFunction__()
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	iLocal_6 = 1;
	unk_0xC48A4BABDFAAB2B9(1);
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_1();
	}
	unk_0x3F6A41F0B145E78C(0);
	unk_0x87D16920E9AF6268();
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), -177f);
		unk_0xC7E6A5D90DED6E0B(0);
	}
	unk_0xB815670C37E03CDE(joaat("freight"));
	unk_0xB815670C37E03CDE(joaat("freightcar"));
	unk_0xB815670C37E03CDE(joaat("freightgrain"));
	unk_0xB815670C37E03CDE(joaat("freightcont1"));
	unk_0xB815670C37E03CDE(joaat("freightcont2"));
	unk_0xB815670C37E03CDE(joaat("tankercar"));
	unk_0xB815670C37E03CDE(joaat("metrotrain"));
	while ((((((!unk_0x5D98D654CDC2165A(joaat("freight")) || !unk_0x5D98D654CDC2165A(joaat("freightcar"))) || !unk_0x5D98D654CDC2165A(joaat("freightgrain"))) || !unk_0x5D98D654CDC2165A(joaat("freightcont1"))) || !unk_0x5D98D654CDC2165A(joaat("freightcont2"))) || !unk_0x5D98D654CDC2165A(joaat("tankercar"))) || !unk_0x5D98D654CDC2165A(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (iLocal_7)
			{
				if (unk_0x765F6FEEFF39224F(uLocal_0))
				{
					unk_0xB011ACF4E2879A2C(&uLocal_0);
				}
				uLocal_0 = unk_0xEB5D8A701BA05E99(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0x8422CE67C0A53728() };
				iLocal_9 = 0;
			}
			if (unk_0x91D5C8283D19AF49(uLocal_0, 0) && !unk_0xD62C4419A41F106A(uLocal_0, 0))
			{
				unk_0x3231F10FD5AE3045(uLocal_0, fLocal_5);
				unk_0xC8F2CB753B5E9422(uLocal_0, fLocal_5);
			}
			if (bLocal_8)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	unk_0x3F6A41F0B145E78C(1);
	unk_0x5894DC159447E10A();
}

