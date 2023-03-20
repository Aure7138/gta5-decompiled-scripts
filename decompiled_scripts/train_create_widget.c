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
	unk_0x5B0FC38A6C315E32(1);
	if (unk_0x24862A9CDC8F8874(3))
	{
		func_1();
	}
	unk_0xFC34CB64CB9DC69E(0);
	unk_0x37F2A48E0843D874();
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), -177f);
		unk_0x8C67D2FDE360FBCA(0);
	}
	unk_0x7567CEA8E6B5340B(joaat("freight"));
	unk_0x7567CEA8E6B5340B(joaat("freightcar"));
	unk_0x7567CEA8E6B5340B(joaat("freightgrain"));
	unk_0x7567CEA8E6B5340B(joaat("freightcont1"));
	unk_0x7567CEA8E6B5340B(joaat("freightcont2"));
	unk_0x7567CEA8E6B5340B(joaat("tankercar"));
	unk_0x7567CEA8E6B5340B(joaat("metrotrain"));
	while ((((((!unk_0x0845149A26DABBA5(joaat("freight")) || !unk_0x0845149A26DABBA5(joaat("freightcar"))) || !unk_0x0845149A26DABBA5(joaat("freightgrain"))) || !unk_0x0845149A26DABBA5(joaat("freightcont1"))) || !unk_0x0845149A26DABBA5(joaat("freightcont2"))) || !unk_0x0845149A26DABBA5(joaat("tankercar"))) || !unk_0x0845149A26DABBA5(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (iLocal_7)
			{
				if (unk_0x95CCECA3948CFE7B(uLocal_0))
				{
					unk_0x9F348D453AF6DCF9(&uLocal_0);
				}
				uLocal_0 = unk_0x4F61E2839B7944ED(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xA92021E6D6BD54F8() };
				iLocal_9 = 0;
			}
			if (unk_0x5D42322C7DB888D0(uLocal_0, 0) && !unk_0xB6900B8CB0ABBD2B(uLocal_0))
			{
				unk_0x76CC2D7C47BF0911(uLocal_0, fLocal_5);
				unk_0x09B8E0E73D483098(uLocal_0, fLocal_5);
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
	unk_0xFC34CB64CB9DC69E(1);
	unk_0xA4E0D8FD51F2A6F7();
}

