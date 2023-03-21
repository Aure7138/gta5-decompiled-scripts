#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0xE8A79675302ED812(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xFA30DFD0084E92FE(uLocal_2, 1))
	{
		if (!unk_0xFA30DFD0084E92FE(uLocal_2, 0))
		{
			if (unk_0x724D816EA203A79E(uLocal_0))
			{
				if (unk_0xE59B7F5A03335350(uLocal_0, 0))
				{
					unk_0x77815D3407C6700D(uLocal_0, 0, 1);
					unk_0x346478B12F69D4E3(uLocal_0, 1);
					unk_0x06D93FD5E4D394CF(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x724D816EA203A79E(uLocal_1))
					{
						unk_0x77815D3407C6700D(uLocal_1, 0, 1);
						unk_0x346478B12F69D4E3(uLocal_1, 1);
						unk_0x06D93FD5E4D394CF(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xF0059F27F7BB6680(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE59B7F5A03335350(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xF0059F27F7BB6680(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xD1DC4B08247A4317(uLocal_0))
				{
					unk_0xF0059F27F7BB6680(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x1E7A09C1710FB071(&uLocal_0);
	unk_0x91BCA7FA73FFCDF2(&uLocal_1);
	unk_0x95E4B6F3ED223F5A();
}

