#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0xB9B05E900D325C36(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x2A3398C6222EB190(uLocal_2, 1))
	{
		if (!unk_0x2A3398C6222EB190(uLocal_2, 0))
		{
			if (unk_0x76B3C79DE564AFC6(uLocal_0))
			{
				if (unk_0x432757A9E7AAFA96(uLocal_0, 0))
				{
					unk_0x1581691D748490F3(uLocal_0, 0, 1);
					unk_0x1F18D3C78C8C1A11(uLocal_0, 1);
					unk_0x31EFA4297B872C86(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x76B3C79DE564AFC6(uLocal_1))
					{
						unk_0x1581691D748490F3(uLocal_1, 0, 1);
						unk_0x1F18D3C78C8C1A11(uLocal_1, 1);
						unk_0x31EFA4297B872C86(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xCD7E92DE2BFA0B0D(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x432757A9E7AAFA96(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xCD7E92DE2BFA0B0D(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x4096DB4B0B8A982B(uLocal_0))
				{
					unk_0xCD7E92DE2BFA0B0D(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x28BB69BE14577487(&uLocal_0);
	unk_0x3D93C0CB2ED2E7DC(&uLocal_1);
	unk_0xBEE2834559A8897A();
}

