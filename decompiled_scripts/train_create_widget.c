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
	unk_0xA81035D922E28F10(1);
	if (unk_0x7547D7CF93115D6D(3))
	{
		func_1();
	}
	unk_0x0A410A4D8F307E26(0);
	unk_0x65FB157973AC3D3E();
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), -177f);
		unk_0xBE5E0E5A454F4D6A(0);
	}
	unk_0xCBE6AC5010E5CE5C(joaat("freight"));
	unk_0xCBE6AC5010E5CE5C(joaat("freightcar"));
	unk_0xCBE6AC5010E5CE5C(joaat("freightgrain"));
	unk_0xCBE6AC5010E5CE5C(joaat("freightcont1"));
	unk_0xCBE6AC5010E5CE5C(joaat("freightcont2"));
	unk_0xCBE6AC5010E5CE5C(joaat("tankercar"));
	unk_0xCBE6AC5010E5CE5C(joaat("metrotrain"));
	while ((((((!unk_0xD291857D0C9C7FEC(joaat("freight")) || !unk_0xD291857D0C9C7FEC(joaat("freightcar"))) || !unk_0xD291857D0C9C7FEC(joaat("freightgrain"))) || !unk_0xD291857D0C9C7FEC(joaat("freightcont1"))) || !unk_0xD291857D0C9C7FEC(joaat("freightcont2"))) || !unk_0xD291857D0C9C7FEC(joaat("tankercar"))) || !unk_0xD291857D0C9C7FEC(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (iLocal_7)
			{
				if (unk_0xFD68187442384158(uLocal_0))
				{
					unk_0x02082C6F369D5223(&uLocal_0);
				}
				uLocal_0 = unk_0x44E34FD47BE39CB9(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xCAED01C16CFFE43C() };
				iLocal_9 = 0;
			}
			if (unk_0xCA8794CE207FC6D5(uLocal_0, 0) && !unk_0xE5D56342B0FF1D0D(uLocal_0))
			{
				unk_0x3C0127DD23CE5548(uLocal_0, fLocal_5);
				unk_0x50BDA076B97B3673(uLocal_0, fLocal_5);
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
	unk_0x0A410A4D8F307E26(1);
	unk_0x883793591E631A3B();
}

