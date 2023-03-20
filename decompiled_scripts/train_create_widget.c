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
	unk_0xD80ABA7495D14FDA(1);
	if (unk_0x4B4BD87E3D30C50D(3))
	{
		func_1();
	}
	unk_0xCB7647634FAB39EB(0);
	unk_0x54C31F53DFBF2D78();
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), -177f);
		unk_0x8793DE27084C2CBD(0);
	}
	unk_0xC60576ADD1AECA45(joaat("freight"));
	unk_0xC60576ADD1AECA45(joaat("freightcar"));
	unk_0xC60576ADD1AECA45(joaat("freightgrain"));
	unk_0xC60576ADD1AECA45(joaat("freightcont1"));
	unk_0xC60576ADD1AECA45(joaat("freightcont2"));
	unk_0xC60576ADD1AECA45(joaat("tankercar"));
	unk_0xC60576ADD1AECA45(joaat("metrotrain"));
	while ((((((!unk_0x4A4B6FD54C499B7D(joaat("freight")) || !unk_0x4A4B6FD54C499B7D(joaat("freightcar"))) || !unk_0x4A4B6FD54C499B7D(joaat("freightgrain"))) || !unk_0x4A4B6FD54C499B7D(joaat("freightcont1"))) || !unk_0x4A4B6FD54C499B7D(joaat("freightcont2"))) || !unk_0x4A4B6FD54C499B7D(joaat("tankercar"))) || !unk_0x4A4B6FD54C499B7D(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			if (iLocal_7)
			{
				if (unk_0x1F2158D615BC4B25(uLocal_0))
				{
					unk_0xED332773700B3CDE(&uLocal_0);
				}
				uLocal_0 = unk_0x113BD27D4E63BAEE(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xE8A88533F8CEE188() };
				iLocal_9 = 0;
			}
			if (unk_0x968EA16107097324(uLocal_0, 0) && !unk_0x0B6E83A9A7ED3EBA(uLocal_0))
			{
				unk_0x0C777DC9CCDD9978(uLocal_0, fLocal_5);
				unk_0xF22A12A2CD86E659(uLocal_0, fLocal_5);
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
	unk_0xCB7647634FAB39EB(1);
	unk_0x2F798BA2098FDADE();
}

